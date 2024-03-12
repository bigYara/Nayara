document.addEventListener('DOMContentLoaded', function() {
    const form = document.getElementById('form-contato');

    form.addEventListener('submit', function(event) {
        const nome = document.getElementById('nome').value.trim();
        const email = document.getElementById('email').value.trim();
        const data = document.getElementById('data').value.trim();
        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        const mensagem = document.getElementById('mensagem').value.trim();
        const genero = document.getElementById('genero').value.trim();
        const numero = document.getElementById('numero').value.trim();
        const escola = document.getElementById('escola').value.trim();
        const serie = document.getElementById('serie').value.trim();
        const responsavel = document.getElementById('responsavel').value.trim();
        const contato = document.getElementById('contato').value.trim();
        const cpf = document.getElementById('cpf').value.trim();
        const rg = document.getElementById('rg').value.trim();

        let isValid = true;

        if (nome === '') {
            isValid = false;
            showError('Por favor, insira seu nome.');
        }

        if (!emailRegex.test(email)) {
            isValid = false;
            showError('Por favor, insira um endereço de email válido.');

        }

        if (mensagem === '') {
            isValid = false;
            showError('Por favor, insira uma mensagem.');
        }

        if (data === '') {
            isValid = false;
            showError('Por favor, insira uma data.');
        }

        if (genero === '') {
            isValid = false;
            showError('Por favor, insira seu gênero.');
        }

       

        if (endereco === '') {
            isValid = false;
            showError('Por favor, insira um endereço.');
        }

        if (numero === '') {
            isValid = false;
            showError('Por favor, insira seu numero de telefone.');
        }


        if (escola === '') {
            isValid = false;
            showError('Por favor, insira seu gênero.');
        }

       

        if (serie === '') {
            isValid = false;
            showError('Por favor, insira sua série atual.');
        }

        
        if (responsavel === '') {
            isValid = false;
            showError('Por favor, insira o nome.');
        }

        if (contato === '') {
            isValid = false;
            showError('Por favor, insira o numero do seu responsavel.');
        }


        if (cpf === '') {
            isValid = false;
            showError('Por favor, insira seu cpf.');
        }

       

        if (rg === '') {
            isValid = false;
            showError('Por favor, insira seu rg.');
        }


        if (isValid) {
            // Se todas as validações passarem, exibe o pop-up
            event.preventDefault();
            showSuccessPopup();
        } else {
            event.preventDefault();
        }
    });

    function showError(message) {
        const errorDiv = document.createElement('div');
        errorDiv.className = 'error';
        errorDiv.textContent = message;

        form.insertBefore(errorDiv, form.firstChild);
    }

    function showSuccessPopup() {
        alert('As informações foram validadas com sucesso!');
    }
});