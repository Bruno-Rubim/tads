<h2>Rows</h2>
<?php
	$conn = new mysqli("localhost", "root", "root", "dbTest");
	if ($conn->connect_error) {
		die("Connection failed: " . $conn->connect_error);
	}
	if (isset($_POST["id"]) && isset($_POST["name"])) {
		$id = $_POST["id"];
		$name = $_POST["name"];
		$conn->query("insert into tbtb (id, nome) value ('$id', '$name')");
	}
	$res = $conn->query("select * from tbtb;");
	print("<table><tr><th>id</th><th>name</th></tr>");
	for (;;) {
		$row = $res->fetch_assoc();
		if (!$row) break;
		print("<tr>");
		print("<td>" . $row["id"] . "</td>");
		print("<td>" . $row["nome"] . "</td>");
		print("</tr>");
	}
	print("</table>");
?>
<h2>Insert</h2>
<form action="./temp.php" method="POST">
	<input type="number" name="id">
	<input type="text" name="name">
	<input type="submit">
</form>
