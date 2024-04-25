<?php
$host = 'localhost:3307' ;
$dbname = 'tiktok' ;
$username = 'tiktok';
$password = 'tiktok';

$pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password);
$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

// Consulta SQL
$sql = "SELECT * FROM influenciadores";

// Preparar a declaração
$stmt = $pdo->prepare($sql);

// Executar a consulta
$stmt->execute();

// Obter resultados
$result = $stmt->fetchAll(PDO::FETCH_ASSOC);



// consulta a segunda tabela
// Consulta sql
$sql2 = "SELECT publicidade.*, influenciadores.nome FROM publicidade, influenciadores WHERE influenciadores.id = publicidade.influenciador_id";

// Preparar a declaração
$stmt2 = $pdo->prepare($sql2);

// Executar a consulta
$stmt2->execute();

// Obter resultados
$result2 = $stmt2->fetchAll(PDO::FETCH_ASSOC);
?>








<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Blog TikTok</title>
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
  <link rel="stylesheet" href="estilo.css">
</head>
<body>

<nav class="navbar navbar-expand-lg navbar-dark bg-custom-blue">
  <center>
    <img src="https://upload.wikimedia.org/wikipedia/en/thumb/a/a9/TikTok_logo.svg/2560px-TikTok_logo.svg.png" width="1000" height="200">
  </center>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>
  
  <div class="collapse navbar-collapse" id="navbarNav">
    <ul class="navbar-nav ml-auto">
      <li class="nav-item active">
        <a class="nav-link" href="index.html">Home</a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="viralizou.html">Viralizou</a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="dados.php">Marketeiros</a>
      </li>
      <li class="nav-item"><svg id="acessibilidadeBtn" xmlns="http://www.w3.org/2000/svg" width="40" height="40" fill="currentColor" class="bi bi-universal-access-circle" viewBox="0 0 16 16">
                <path d="M8 4.143A1.071 1.071 0 1 0 8 2a1.071 1.071 0 0 0 0 2.143m-4.668 1.47 3.24.316v2.5l-.323 4.585A.383.383 0 0 0 7 13.14l.826-4.017c.045-.18.301-.18.346 0L9 13.139a.383.383 0 0 0 .752-.125L9.43 8.43v-2.5l3.239-.316a.38.38 0 0 0-.047-.756H3.379a.38.38 0 0 0-.047.756Z"/>
                <path d="M8 0a8 8 0 1 0 0 16A8 8 0 0 0 8 0M1 8a7 7 0 1 1 14 0A7 7 0 0 1 1 8"/>
              </svg></li>
    </ul>
  </div>
</nav>

<div class="container mt-5">
  <h2>Influenciadores e suas Rendas por Publicação</h2>
  <table class="table">
    <thead class="thead-dark">
      <tr>
        <th scope="col">id</th>
        <th scope="col">Foto</th>
        <th scope="col">Nome</th>
        <th scope="col">Seguidores</th>
        <th scope="col">Categoria</th>
       
      </tr>
    </thead>
    <tbody>
    <?php
    // Iterar sobre os resultados
    foreach ($result as $row) {
        echo '
            <tr>
                <th class="text-white">'. $row['id'] .'</th>
                <td><img width="75px" src="'. $row['img'] .'"></td>
                <td class="text-white"><a class="link" href="'. $row['link'] .'">'. $row['nome'] .'</a></td>
                <td class="text-white">'. $row['seguidores'] .'</td>
                <td class="text-white">'. $row['categoria'] .'</td>
            </tr>
        ';

        // Outros campos e operações conforme necessário
    }
?>
     
    </tbody>
  </table>

  
  <table class="table">
    <thead class="thead-dark">
      <tr>
        <th scope="col">Produto</th>
        <th scope="col">Data</th>
        <th scope="col">Valor</th>
        <th scope="col">Nome</th>
       
      </tr>
    </thead>
    <tbody>
      <?php
      // Iterar sobre os resultados
      foreach ($result2 as $row) {
        
        echo 
        '
        <tr>
        <th class="text-white">'. $row['produto'] .'</th>
        <td class="text-white">'. $row['data_publicacao'] .'</td>
        <td class="text-white">'. $row['valor'] .'</td>
        <td class="text-white">'. $row['nome'] .'</td>
      </tr>
        ';

        // Outros campos e operações conforme necessário
      }
      ?>
     
    </tbody>
  </table>
</div>
<script src="script.js"></script>
<script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.5.3/dist/umd/popper.min.js"></script>
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</body>
</html>
