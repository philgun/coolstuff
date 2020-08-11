--------------------------------------------------------------------------------------------------------
--SQL Queries (Making table, select table, manipulate table filtering)
--------------------------------------------------------------------------------------------------------

--Change to AdventureWorks2012 database
USE [AdventureWorks2012]

/*General Rule of using SELECT SYNTAX*/
-- SELECT A,B,C FROM table.name ~> will show A B C which are the properties of the table "table.name"

--See all columns from HumanResources.Department table. '*' symbol means 'all'
SELECT * FROM HumanResources.Department

--SHOW ALL DEPARTMENT'S NAME
SELECT Name FROM HumanResources.Department

--SHOW ME ALL UNIQUE DEPARTMENT'S NAME (EQ. to df.unique())
SELECT DISTINCT Name FROM HumanResources.Department

--SHOW ME ALL THE GROUPNAME
SELECT GroupName FROM HumanResources.Department

--SHOW ME ALL THE UNIQUE VALUE OF THE GROUPNAME (EQ. to df.unique())
SELECT DISTINCT GroupName FROM HumanResources.Department

--SHOW ME ALL DEPARTMENT NAMES PART OF MANUFACTURE GROUPNAME USING FILTER (Where clause)
-- WHERE SYNTAX is for the filter, LIKE is similar to '==' for string only in SQL, and it is not case sensitive
SELECT Name, GroupName FROM HumanResources.Department WHERE GroupName LIKE 'Manufacturing'

--Give me all the employees from employee table
SELECT * FROM HumanResources.Employee

--Give me a list of all employees who have an organizationlevel > 2
SELECT * FROM HumanResources.Employee WHERE OrganizationLevel = 2

--Give me a list of all employees who have organization level = 2 or 3
SELECT * FROM HumanResources.Employee WHERE OrganizationLevel IN (2,3)
-- IN introduce a list to the filter query

--Give me a list of employees who have a title as facilities manager
SELECT * FROM HumanResources.Employee WHERE JobTitle LIKE 'Facilities Manager'

--Give me a list of employee who have a title 'manager', no matter what manager he/she is
SELECT * FROM HumanResources.Employee WHERE JobTitle LIKE '%Manager'
-- '%' syntax means anything can be before the word 'manager', but nothing should be after the word manager

--Give me a list of employee who have a title 'control', dont care what is before the word and what is after
SELECT * FROM HumanResources.Employee WHERE JobTitle LIKE '%Control%'
-- %<word>% means anything can be before the <word> and after the <word>

--Possibility to filter out date
--Give me all employees who are born after jan 1 1980
SELECT * FROM HumanResources.Employee WHERE BirthDate > '1/1/1980' /*M/D/YYY*/

--Give me all employees who are born between jan 1 1970 and jan 1 1980
--method 1
SELECT * FROM HumanResources.Employee WHERE BirthDate > '1/1/1970' and BirthDate < '1/1/1980'
--method 2
SELECT * FROM HumanResources.Employee WHERE BirthDate BETWEEN '1/1/1970' AND '1/1/1980'

--Calculated columns
SELECT Name, ListPrice FROM Production.Product

--Introduce new column (Adusjted_List_Price) based on existing columns (ListPrice)
SELECT Name,ListPrice, Listprice+10 AS Adjusted_List_Price FROM Production.Product

--Store the new formed column into different PERMANENT table using INTO 
SELECT Name,ListPrice, Listprice+10 AS Adjusted_List_Price INTO Production.Product_2 FROM Production.Product
SELECT * FROM Production.Product_2 

--Store the new formed column into different TEMPORARY table using INTO ~ using # tells SQL server to store the data at
--temporary table. As soon as the session is over, the # table will be deleted
SELECT Name,ListPrice, Listprice+10 AS Adjusted_List_Price INTO #tmpname FROM Production.Product
SELECT * FROM #tmpname

--Delete data from a table
--DELETE THE ROW THAT HAS BEARING BALL IN THE NAME FIELD
DELETE FROM Production.Product_2 
WHERE Name LIKE '%Ball Bearing%'
SELECT * FROM Production.Product_2

--Update statement - Update a property (Name) of a table (Production.Product_2) with conditional filter (Where Name = 'Blade')
UPDATE Production.Product_2
SET Name  = 'Blade_New'
WHERE Name LIKE 'BLADE'

UPDATE Production.Product_2
SET Name  = 'Blade 123!'
WHERE Name LIKE 'Blade_New'

SELECT * FROM Production.Product_2

--------------------------------------------------------------------------------------------------------
--SQL Joins
--------------------------------------------------------------------------------------------------------
--Inner join ~> You will only get the rows which are common accross the tables.

--Outer join :
    --left outer join = give me all the rows from table 1 (left) and table 2 (right), if there is uncommon row, give it null
        --all rows from table 1 (left table) are included, whatever ddoesnt match between left and right table give it null
    --right outer join = take everything from table 2 (right), whatever match put the value, whatever doesnt put it as null
        -- all rows from table 2 (right table) are included 
    --full outer join = take everything from table 1 whatever match with table 2 put the value, give it null when it is not match and vice versa

--Cross join =  each row from table 1 will be joined by each row from table 2 (like nested for loop)

--Create Table
CREATE TABLE myemployee 
(
    EmployeeID INT,
    FirstName VARCHAR(20),
    LastName VARCHAR(20)
)

--Insert values
INSERT INTO myemployee VALUES(1,'Michael','Scott')
INSERT INTO myemployee VALUES(2,'Philipe','Gunawan')
INSERT INTO myemployee VALUES(3,'Abang','Ganteng')

SELECT * FROM myemployee

--Create another table
CREATE TABLE mysalary
(
    EmployeeID INT,
    Salary FLOAT
)

--Insert values to the new table
INSERT INTO mysalary VALUES (1,2000)
INSERT INTO mysalary VALUES (2,3000)
INSERT INTO mysalary VALUES (3,1000)

SELECT * FROM myemployee
SELECT * FROM mysalary

--INNER JOINING
--Joining MUST give alias to the table. In this case myemployee alias is A and my salary is B
--ON syntax is pointing to which common column we want the joining based on
SELECT * FROM myemployee A INNER JOIN mysalary B ON A.EmployeeID = B.EmployeeID

--Joining table myemployee and my salary but select only the first name last name and salary after joining
SELECT A.FirstName, A.LastName, B.Salary FROM myemployee A INNER JOIN mysalary B ON A.EmployeeID =  B.EmployeeID

--LEFT OUTER JOING
CREATE TABLE telly
(
    EmployeeID INT,
    phone INT
)

INSERT INTO telly VALUES(1,12345)
INSERT INTO telly VALUES(2,20345)

SELECT * FROM telly
SELECT * FROM myemployee

SELECT A.FirstName, A.LastName,B.phone FROM myemployee A LEFT JOIN telly B ON A.EmployeeID = B.EmployeeID

--Right outer joing

CREATE TABLE parking
(
    EmployeeID INT,
    ParkingSpot VARCHAR(20)
)

DELETE FROM parking /*Delete all the entries in the parking table*/

INSERT INTO parking VALUES(1,'A1')
INSERT INTO parking VALUES(2,'B2')

SELECT * FROM myemployee
SELECT * FROM parking

SELECT A.ParkingSpot, B.FirstName, B.LastName FROM parking A RIGHT JOIN myemployee B ON A.EmployeeID = B.EmployeeID

-- Full Outer Join
CREATE TABLE customer
(
    CustomerID INT,
    CustomerName VARCHAR(20)
)
DELETE FROM customer
INSERT INTO customer VALUES(1,'John')
INSERT INTO customer VALUES(3,'Gunawan')

CREATE TABLE MyOrder
(
    OrderID INT,
    OrderName VARCHAR(20),
    CustomerID INT
)
DELETE FROM MyOrder
INSERT INTO MyOrder VALUES(1,'SameOrder1',1)
INSERT INTO MyOrder VALUES(2,'SameOrder2',2)
INSERT INTO MyOrder VALUES(3,'SameOrder3',3)
INSERT INTO MyOrder VALUES(4,'SameOrder4',4)

SELECT * FROM customer
SELECT * FROM MyOrder


SELECT A.CustomerID, A.CustomerName, B.OrderName, B.OrderID  
FROM customer A FULL OUTER JOIN MyOrder B ON A.CustomerID = B.CustomerID

--Cross Join
SELECT * FROM customer
SELECT * FROM mysalary
SELECT * FROM customer CROSS JOIN mysalary