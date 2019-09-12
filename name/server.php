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
$sql= "CREATE TABLE mytable(id INT(6),name VARCHAR(30) NOT NULL)";
if($conn->query($sql)===TRUE) {
echo "Table mytable created successfully";
} else{
echo "Error in creating table:".$conn->error;
}
?>
