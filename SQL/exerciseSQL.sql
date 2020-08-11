/*Creating my first database*/
CREATE DATABASE mytestdb


/*Creating my first table*/
USE mytestdb /*Specifying which database the code is executed in*/

CREATE TABLE mytesttable
(
    rollno int,             /*1st column is "rollno" and dtype is int*/
    firstname varchar (50), /*2nd column is "firstname" and dtype is varchar*/
    lastname varchar (50)   /*3rd column is "lastname" and dtype is varchar*/
)

/*Retrieve the data from database*/
USE mytestdb 

/*Insert data into my table*/
INSERT INTO mytesttable(rollno,firstname,lastname)
VALUES(1,'PHILIPE','GUNAWAN')

/*retrieve data*/
SELECT rollno, firstname, lastname FROM mytesttable 

