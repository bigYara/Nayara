<?php
session_start();
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : '';
$_SESSION['r2'] = isset($_POST['r2']) ? $_POST['r2'] : ''; // Armazena a resposta da pergunta 2
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Quiz de Matemática - Pergunta 2</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
  <div class="container">
    <h2>Quiz de Matemática - Pergunta 2</h2>
    <form action="pt3.php" method="POST">
      <div class="form-group">
        <label for="r2"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-2-square" viewBox="0 0 16 16">
          <path d="M6.646 6.24v.07H5.375v-.064c0-1.213.879-2.402 2.637-2.402 1.582 0 2.613.949 2.613 2.215 0 1.002-.6 1.667-1.287 2.43l-.096.107-1.974 2.22v.077h3.498V12H5.422v-.832l2.97-3.293c.434-.475.903-1.008.903-1.705 0-.744-.557-1.236-1.313-1.236-.843 0-1.336.615-1.336 1.306"/>
          <path d="M0 2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm15 0a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v12a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1z"/>
        </svg>Qual é o resultado de 8 x 6?</label><br>
        <input type="radio" name="r2" value="c"> 86<br>
        <input type="radio" name="r2" value="b"> 40<br>
        <input type="radio" name="r2" value="a"> 48<br>
      </div>
      <button type="submit" class="btn btn-primary">Próxima Pergunta</button>
    </form>
  </div>
</body>
</html>