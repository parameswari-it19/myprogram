<?php
$servername= "121.200.55.60:3307";
$username= "2019UIT1135";
$password= " 31-05-2002";
$database= "2019UIT1135";
$conn=mysqli_connect($servername,$username,$password,$database);
if(!$conn)
 {
die("Connection failed:".mysqli_connect_error());
}
echo "Connected successfully";
$sql="INSERT INTO mytable(id,name)VALUES(1,'bit')";
if (mysqli_query($conn,$sql))
{
echo"new record created successfully";
}
else
{
echo"Error:".$sql."<br>".mysqli_error($conn);
}$sql="SELECT id,name From mytable";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0){
while($row=mysqli_fetch_access($result)){
echo "id:".$row["id"]."-name:".$row["name"].".<br>";
}
}
elseecho "0results";
}
?>
{

