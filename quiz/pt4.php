<?php
session_start();
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : '';
$_SESSION['r2'] = isset($_POST['r2']) ? $_POST['r2'] : ''; // Armazena a resposta da pergunta 2
$_SESSION['r3'] = isset($_POST['r3']) ? $_POST['r3'] : ''; // Armazena a resposta da pergunta 3
$_SESSION['r4'] = isset($_POST['r4']) ? $_POST['r4'] : ''; // Armazena a resposta da pergunta 4
?>


<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Quiz de Matemática - Pergunta 4</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
  <div class="container">
    <h2></h2>
    <form action="pt5.php" method="POST">
      <div class="form-group">
        <label for="r4"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-4-square" viewBox="0 0 16 16">
            <path d="M7.519 5.057q.33-.527.657-1.055h1.933v5.332h1.008v1.107H10.11V12H8.85v-1.559H4.978V9.322c.77-1.427 1.656-2.847 2.542-4.265ZM6.225 9.281v.053H8.85V5.063h-.065c-.867 1.33-1.787 2.806-2.56 4.218"/>
            <path d="M0 2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm15 0a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v12a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1z"/>
          </svg>Qual é o resultado de 64 ÷ 8?</label><br>
        <input type="radio" name="r4" value="b"> 10<br>
        <input type="radio" name="r4" value="a"> 8<br>
        <input type="radio" name="r4" value="c"> 9<br>
      </div>
      <button type="submit" class="btn btn-primary">Próxima Pergunta</button>
    </form>
  </div>
</body>
</html>