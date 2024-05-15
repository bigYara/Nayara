<?php
session_start();
$_SESSION['r1'] = isset($_POST['r1']) ? $_POST['r1'] : ''; 
$_SESSION['r2'] = isset($_POST['r2']) ? $_POST['r2'] : ''; // Armazena a resposta da pergunta 2
$_SESSION['r3'] = isset($_POST['r3']) ? $_POST['r3'] : ''; // Armazena a resposta da pergunta 3
$_SESSION['r4'] = isset($_POST['r4']) ? $_POST['r4'] : ''; // Armazena a resposta da pergunta 4
$_SESSION['r5'] = isset($_POST['r5']) ? $_POST['r5'] : ''; // Armazena a resposta da pergunta 5

// Defina as respostas corretas para cada pergunta
$answers = array(
    'r1' => 'a',
    'r2' => 'a',
    'r3' => 'a',
    'r4' => 'a',
    'r5' => 'a'
);

// Inicialize a pontuação como zero
$score = 0;

// Verifique cada resposta do usuário e atualize a pontuação
foreach ($_SESSION as $key => $value) {
    if (isset($answers[$key])) {
        if ($value == $answers[$key]) {
            $score++;
        }
    }
}

// Calcule o número de perguntas corretas e erradas
$num_correct = $score;
$num_wrong = count($answers) - $num_correct;
?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Respostas do Quiz</title>
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>
    <div class="container">
        <h2>Respostas do Quiz</h2>
        <p>Você acertou <?php echo $num_correct; ?> de 5 perguntas.</p>
        <p>Você errou <?php echo $num_wrong; ?> de 5 perguntas.</p>
    </div>
</body>
</html>