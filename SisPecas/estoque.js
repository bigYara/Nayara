async function cadastrarPeca(){

    const nome = document.getElementById("nome").value; //
    const etiqueta = document.getElementById("etiqueta").value; //
    const placa = document.getElementById("placa").value; //
    const ano = document.getElementById("ano").value; //
    const categoria = document.getElementById("categoria").value; //
    const valor = document.getElementById("valor").value; //

    // Validação básica para evitar cadastros vazios
    if(!nome || !etiqueta || !valor) {
        alert("Por favor, preencha pelo menos Nome, Etiqueta e Valor.");
        return;
    }

    const { error } = await supabase
        .from("pecas")
        .insert([{
            nome,
            etiqueta,
            placa,
            ano,
            categoria,
            valor,
            status: "Em estoque" //
        }]);

    if(error){ //
        alert(error.message); //
        return; //
    } //

    alert("Peça cadastrada"); //

    // Limpa os campos do formulário para o próximo cadastro
    document.getElementById("nome").value = "";
    document.getElementById("etiqueta").value = "";
    document.getElementById("placa").value = "";
    document.getElementById("ano").value = "";
    document.getElementById("valor").value = "";

    carregarPecas(); //
}

async function carregarPecas(){

    const { data, error } = await supabase
        .from("pecas")
        .select("*"); //

    if (error) {
        console.error("Erro ao buscar dados:", error.message);
        return;
    }

    let html = ""; //

    if (data) {
        data.forEach(peca => { //
            // Define o comportamento do botão baseado no status atual
            const textoStatusBotao = peca.status === "Em estoque" ? "Marcar Vendido" : "Voltar p/ Estoque";
            const proximoStatus = peca.status === "Em estoque" ? "Vendido" : "Em estoque";
            const corBotaoStatus = peca.status === "Em estoque" ? "#28a745" : "#ffc107";

            html += `
            <tr>
                <td>${peca.nome}</td> <td>${peca.etiqueta}</td> <td>${peca.placa}</td> <td>${peca.ano}</td> <td>${peca.categoria}</td> <td>R$ ${peca.valor}</td> <td><strong>${peca.status}</strong></td> <td>
                    <button onclick="alterarStatus(${peca.id}, '${proximoStatus}')" style="background-color: ${corBotaoStatus}; color: black; width: auto; padding: 5px 10px; margin-right: 5px;">
                        ${textoStatusBotao}
                    </button>

                    <button onclick="excluir(${peca.id})" style="background-color: #dc3545; color: white; width: auto; padding: 5px 10px;">
                        Excluir
                    </button> </td>
            </tr>
            `; //
        }); //
    }

    document.getElementById("tabelaPecas").innerHTML = html; //
}

// Nova função para atualizar o status no Supabase
async function alterarStatus(id, novoStatus) {
    const { error } = await supabase
        .from("pecas")
        .update({ status: novoStatus })
        .eq("id", id);

    if (error) {
        alert("Erro ao atualizar status: " + error.message);
        return;
    }

    carregarPecas();
}

async function excluir(id){

    if (confirm("Deseja realmente excluir esta peça do sistema?")) {
        const { error } = await supabase
            .from("pecas")
            .delete() //
            .eq("id", id); //

        if (error) {
            alert("Erro ao deletar: " + error.message);
            return;
        }

        carregarPecas(); //
    }
}

// Inicializa a tabela assim que o arquivo é lido pelo navegador
carregarPecas(); //

// Criamos uma variável global para guardar a lista original de peças vinda do banco
let todasAsPecas = [];

async function carregarPecas(){

    const { data, error } = await supabase
        .from("pecas")
        .select("*");

    if (error) {
        console.error("Erro ao buscar dados:", error.message);
        return;
    }

    // Salva a lista original na nossa variável global
    todasAsPecas = data || [];

    // Limpa o campo de pesquisa sempre que recarregar totalmente os dados
    document.getElementById("barraPesquisa").value = "";

    // Renderiza os dados na tela
    renderizarTabela(todasAsPecas);
}

// Nova função separada apenas para construir o HTML da tabela
function renderizarTabela(listaDePecas) {
    let html = "";

    listaDePecas.forEach(peca => {
        const textoStatusBotao = peca.status === "Em estoque" ? "Marcar Vendido" : "Voltar p/ Estoque";
        const proximoStatus = peca.status === "Em estoque" ? "Vendido" : "Em estoque";
        const corBotaoStatus = peca.status === "Em estoque" ? "#28a745" : "#ffc107";

        html += `
        <tr>
            <td>${peca.nome}</td>
            <td>${peca.etiqueta}</td>
            <td>${peca.placa}</td>
            <td>${peca.ano}</td>
            <td>${peca.categoria}</td>
            <td>R$ ${peca.valor}</td>
            <td><strong>${peca.status}</strong></td>
            <td>
                <button onclick="alterarStatus(${peca.id}, '${proximoStatus}')" style="background-color: ${corBotaoStatus}; color: black; width: auto; padding: 5px 10px; margin-right: 5px;">
                    ${textoStatusBotao}
                </button>
                <button onclick="excluir(${peca.id})" style="background-color: #dc3545; color: white; width: auto; padding: 5px 10px;">
                    Excluir
                </button>
            </td>
        </tr>
        `;
    });

    document.getElementById("tabelaPecas").innerHTML = html;
}

// Nova função que faz o filtro dinâmico
function filtrarPecas() {
    const termoPesquisa = document.getElementById("barraPesquisa").value.toLowerCase();

    // Filtra se o termo bater com nome, etiqueta ou placa
    const pecasFiltradas = todasAsPecas.filter(peca => {
        return (
            peca.nome?.toLowerCase().includes(termoPesquisa) ||
            peca.etiqueta?.toLowerCase().includes(termoPesquisa) ||
            peca.placa?.toLowerCase().includes(termoPesquisa)
        );
    });

    // Atualiza a tabela apenas com os resultados filtrados
    renderizarTabela(pecasFiltradas);
}

// Nova função para atualizar o status no Supabase
async function alterarStatus(id, novoStatus) {
    const { error } = await supabase
        .from("pecas")
        .update({ status: novoStatus })
        .eq("id", id);

    if (error) {
        alert("Erro ao atualizar status: " + error.message);
        return;
    }

    carregarPecas();
}

async function excluir(id){
    if (confirm("Deseja realmente excluir esta peça do sistema?")) {
        const { error } = await supabase
            .from("pecas")
            .delete()
            .eq("id", id);

        if (error) {
            alert("Erro ao deletar: " + error.message);
            return;
        }

        carregarPecas();
    }
}

// Inicializa a tabela assim que o arquivo é lido pelo navegador
carregarPecas();