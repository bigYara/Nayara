<?php
session_start();
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : '';
$_SESSION['r2'] = isset($_POST['r2']) ? $_POST['r2'] : ''; // Armazena a resposta da pergunta 2
$_SESSION['r3'] = isset($_POST['r3']) ? $_POST['r3'] : ''; // Armazena a resposta da pergunta 3
?>


<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Quiz de Matemática - Pergunta 3</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
  <div class="container">
    <h2></h2>
    <form action="pt4.php" method="POST">
      <div class="form-group">
        <label for="r3"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-3-square" viewBox="0 0 16 16">
            <path d="M7.918 8.414h-.879V7.342h.838c.78 0 1.348-.522 1.342-1.237 0-.709-.563-1.195-1.348-1.195-.79 0-1.312.498-1.348 1.055H5.275c.036-1.137.95-2.115 2.625-2.121 1.594-.012 2.608.885 2.637 2.062.023 1.137-.885 1.776-1.482 1.875v.07c.703.07 1.71.64 1.734 1.917.024 1.459-1.277 2.396-2.93 2.396-1.705 0-2.707-.967-2.754-2.144H6.33c.059.597.68 1.06 1.541 1.066.973.006 1.6-.563 1.588-1.354-.006-.779-.621-1.318-1.541-1.318"/>
            <path d="M0 2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm15 0a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v12a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1z"/>
          </svg>Qual é o resultado de 25 - 13?</label><br>
        <input type="radio" name="r3" value="c"> 10<br>
        <input type="radio" name="r3" value="b"> 15<br>
        <input type="radio" name="r3" value="a"> 12<br>
      </div>
      <button type="submit" class="btn btn-primary">Próxima Pergunta</button>
    </form>
  </div>
</body>
</html>