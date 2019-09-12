<?php
$servername="121.200.55.60:3307";
$username="2019UIT1135";
$password=" 31-05-2002";
$database="2019UIT1135";
//Create connection
$conn=mysqli_connect($servername,$username,$password,$database);
//Check connection
if(!$conn){
die("Connection failed:".mysqli_connect_error());
}
echo "Connected successfully";
$sql="INSERT INTO mytable(id,name)VALUES(1,'BIT')";
if(mysqli__query($conn,$sql)) {
echo "New record created successfully";
} 
else
{
echo "Error:".$sql."<br>".mysqli_error($conn);
}
$sql="SELECT id,name FROM mytable";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0){
//output data of each row
while($row=mysqli_fetch_assoc($result)){
echo"id:".$row["id"]."-Name:".$row["name"].""."<br>";
}
}else{
echo "0 results";}
?> 

