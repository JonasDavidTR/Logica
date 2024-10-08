// 14. Informar o tempo para abrir semáforos sincronizados de acordo com a distância entre eles.

function syncSemaforo(dist, velocidade) {
    let tempo = dist / velocidade
    return tempo * 1000
}

// Função de callback
const semaforo1 = setTimeout(function() {
    console.log('Primeiro semáforo aberto')

    const semaforo2 = setTimeout(function() {
        console.log('Segundo semáforo aberto')
    }, syncSemaforo(10, 2))

}, syncSemaforo(5, 1))