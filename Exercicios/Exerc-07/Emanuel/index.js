/**
 * 7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
*/

function idadeEmDias(idadeDias) {

    // Passo 1: Receber a idade em dias
    let diasTotais = idadeDias

    // Passo 2: Calcular os anos (divisão inteira por 365)
    let anos = (diasTotais - (diasTotais % 365)) / 365

    // Passo 3: Calcular os dias restantes após anos
    let diasRestantes = diasTotais % 365

    // Passo 4: Calcular os meses (divisão inteira por 30)
    let meses = (diasRestantes - (diasRestantes % 30)) / 30

    // Passo 5: Calcular os dias restantes após meses
    let dias = diasRestantes % 30

    // Passo 6: Exibir o resultado na tela
    console.log('Idade:', anos, 'anos', meses, 'meses', dias, 'dias')
}

// Exemplo: Idade em dias
idadeEmDias(7502)