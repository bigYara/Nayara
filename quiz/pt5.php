<?php
session_start();
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : '';
$_SESSION['r2'] = isset($_POST['r2']) ? $_POST['r2'] : ''; // Armazena a resposta da pergunta 2
$_SESSION['r3'] = isset($_POST['r3']) ? $_POST['r3'] : ''; // Armazena a resposta da pergunta 3
$_SESSION['r4'] = isset($_POST['r4']) ? $_POST['r4'] : ''; // Armazena a resposta da pergunta 4
$_SESSION['r5'] = isset($_POST['r5']) ? $_POST['r5'] : ''; // Armazena a resposta da pergunta 5
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Quiz de Matemática - Pergunta 5</title>
  <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
  <div class="container">
    <h2></h2>
    <form action="resposta.php" method="POST">
      <div class="form-group">
        <label for="r5"><svg xmlns="http://www.w3.org/2000/svg" width="35" height="35" fill="currentColor" class="bi bi-5-square" viewBox="0 0 16 16">
            <path d="M7.994 12.158c-1.57 0-2.654-.902-2.719-2.115h1.237c.14.72.832 1.031 1.529 1.031.791 0 1.57-.597 1.57-1.681 0-.967-.732-1.57-1.582-1.57-.767 0-1.242.45-1.435.808H5.445L5.791 4h4.705v1.103H6.875l-.193 2.343h.064c.17-.258.715-.68 1.611-.68 1.383 0 2.561.944 2.561 2.585 0 1.687-1.184 2.806-2.924 2.806Z"/>
            <path d="M0 2a2 2 0 0 1 2-2h12a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2zm15 0a1 1 0 0 0-1-1H2a1 1 0 0 0-1 1v12a1 1 0 0 0 1 1h12a1 1 0 0 0 1-1z"/>
          </svg>Qual é a raiz quadrada de 81?</label><br>
        <input type="radio" name="r5" value="b"> 8 <br>
        <input type="radio" name="r5" value="a"> 9 <br>
        <input type="radio" name="r5" value="c"> 20<br>
      </div>
      <button type="submit" class="btn btn-primary">Próxima Pergunta</button>
    </form>
  </div>
</body>
</html>