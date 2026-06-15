const SUPABASE_URL = "https://tnggtothleyqmgzqzytw.supabase.co"; //
const SUPABASE_KEY = "sb_publishable_4vv_c3tF4tbbKGrEuXM9_A_CIDRTV1f"; //

// Inicializa o cliente usando o objeto global da biblioteca v2
const supabaseClient = supabase.createClient(
    SUPABASE_URL,
    SUPABASE_KEY
);

// Define globalmente para ser usado nos outros scripts
window.supabase = supabaseClient;

console.log("Supabase configurado com sucesso!");