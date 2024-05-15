<?php
session_start();

// Armazena a resposta da pergunta 1
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : '';

?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Quiz de Matemática - Pergunta 1</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
  <div class="container">
    <h2>Quiz de Matemática - Pergunta 1</h2>
    <form action="pt2.php" method="POST">
      <div class="form-group">
        <label for="r1"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-1-square" viewBox="0 0 16 16">
          <path d="M9.283 4.002V12H7.971V5.338h-.065L6.072 6.656V5.385l1.899-1.383z"/>
          <path d="M0 2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm15 0a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v12a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1z"/>
        </svg>Qual é o resultado de 2 + 2?</label><br>
        <input type="radio" name="r1" value="a"> 3<br>
        <input type="radio" name="r1" value="b"> 4<br>
        <input type="radio" name="r1" value="c"> 5<br>
      </div>
      <button type="submit" class="btn btn-primary">Próxima Pergunta</button>
    </form>
  </div>
</body>
</html>