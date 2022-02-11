'''
For local testing purposes 

- tony
'''
import subprocess
import sys
def install(package):
    subprocess.check_call([sys.executable, "-m", "pip", "install", package])
    
install('psycopg2-binary')
import psycopg2
from psycopg2 import Error

def get_tables(table_list):
    try: 
        table_dict = {}
        
        connection = psycopg2.connect(
            user = 'data_r', 
            password = 'DSv4014svesLerud!3n3', 
            host = 'prod-rds-14012022.c74igy9kub2n.ap-southeast-3.rds.amazonaws.com',
            #host = 'rds-sribuu-prod.cljh6zjpqmw5.ap-southeast-1.rds.amazonaws.com', 
            port = 5432, 
            database = 'alia')
        
        cursor = connection.cursor()
        
        for table in table_list: 
            cursor.execute("SELECT * FROM " + table)
            table_dict[table] = cursor.fetchall()
        
        return table_dict

    except(Exception, Error) as error: 
        return print('error while connecting: ',error)


def table_exists(con, table_str):

    exists = False
    try:
        cur = con.cursor()
        cur.execute("select exists(select relname from pg_class where relname='" + table_str + "')")
        exists = cur.fetchone()[0]
        print(exists)
        cur.close()
    except psycopg2.Error as e:
        print (e)
    return exists

def get_table_col_names(con, table_str):

    col_names = []
    try:
        cur = con.cursor()
        cur.execute("select * from " + table_str + " LIMIT 0")
        for desc in cur.description:
            col_names.append(desc[0])        
        cur.close()
    except psycopg2.Error as e:
        print (e)

    return col_names