
    document.getElementById('quizForm').addEventListener('submit', function(e) {
      e.preventDefault();
      const answers = {
        q1: 'b',
        q2: 'b',
        q3: 'b',
        q4: 'c',
        q5: 'b'
      };
      let score = 0;
      for (let i = 1; i <= 5; i++) {
        const answer = document.querySelector(input[name="q${i}"]:checked);
        if (answer) {
          if (answer.value === answers[q${i}]) {
            score++;
          }
        }
      }
      const percentage = (score / 5) * 100;
      document.getElementById('result').innerHTML = <p class="result">Você acertou ${score} de 5 questões (${percentage}%).</p>;
    });
