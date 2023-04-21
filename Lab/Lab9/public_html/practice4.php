<!DOCTYPE html>
<html>
<head>
    <title>Multiplication Table</title>
</head>
<body>
    <h1>Multiplication Table</h1>
    <?php
    // Get user input from form
    $size = $_POST['size'];
    
    // Generate table
    echo "<table border='1'>";
    for ($i = 1; $i <= $size; $i++) {
        echo "<tr>";
        for ($j = 1; $j <= $size; $j++) {
            echo "<td>" . ($i * $j) . "</td>";
        }
        echo "</tr>";
    }
    echo "</table>";
    ?>
</body>
</html>
