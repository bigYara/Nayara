var pont = 0;


var pont = 0;
setInterval(function() {
  pont++;
  $("#pont").html(pont);
}, 500); // em ms


 // Função para verificar colisão entre dois elementos
 function verificarColisao(elemento1, elemento2) {
    var rect1 = elemento1.getBoundingClientRect();
    var rect2 = elemento2.getBoundingClientRect();

    return !(rect1.right < rect2.left || 
             rect1.left > rect2.right || 
             rect1.bottom < rect2.top || 
             rect1.top > rect2.bottom);
  }

  
  function verificarColisaoContinua() {
    var colidiu = verificarColisao(document.getElementById('train'), document.getElementById('train2'));
    if (colidiu) {

      $('#staticBackdrop').modal('toggle');
      $("#train").remove();

      
      pont = 0;
      $("#pont").html(pont);
  
     
      // Parar o movimento dos elementos
      $("#train").stop();
      $("#train2").stop();
    
    }
  }


  setInterval(verificarColisaoContinua, 1000);

 
  window.addEventListener('keyup', function(e) {
    var codigoTecla = e.which || e.keyCode || 0;
    var space = codigoTecla == 32;
    if (space) {
      $("#train").animate({marginTop: "-=400px"});
      $("#train").animate({marginTop: "+=400px"});
    } 
  });

  (function movimentarInimigo() {
    $("#train2").animate({left: '-=30%'});
    setTimeout(movimentarInimigo, 0);
  })();
  (function recarregarInimigo() {
    $("#inimigo").html('<img id="train2" src="img3.gif">');
    setTimeout(recarregarInimigo, 4000);
  })();