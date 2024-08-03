<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "esp32_project";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Get the values from the POST request
$pir_value = $_POST['pir_value'];
$ldr_value = $_POST['ldr_value'];
$light_status = $_POST['light_status'];

// Prepare and bind
$stmt = $conn->prepare("INSERT INTO sensor_data (pir_value, ldr_value, light_status) VALUES (?, ?, ?)");
$stmt->bind_param("iis", $pir_value, $ldr_value, $light_status);

if ($stmt->execute()) {
    echo "New record created successfully";
} else {
    echo "Error: " . $stmt->error;
}

$stmt->close();
$conn->close();
?>
