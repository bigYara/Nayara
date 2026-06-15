const form = document.getElementById("loginForm"); //

form.addEventListener("submit", async (e) => { //

    e.preventDefault(); //

    const email = document.getElementById("email").value; //
    const password = document.getElementById("senha").value; //

    // Autenticação utilizando o cliente configurado
    const { data, error } = await supabase.auth.signInWithPassword({
        email,
        password
    }); //

    if (error) { //
        alert(error.message); //
        return; //
    }

    alert("Login realizado com sucesso!"); //
    window.location.href = "estoque.html"; //
});