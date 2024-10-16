// 15. Calcular a altura de um prédio utilizando o tamanho de sua sombra e a sua altura.
/**
 * Altura do predio               -- Tamanho da sombra do prédio
 * Altura de um objeto conhecido  -- Tamanho da sombra do objeto conhecido
 *
 * Altura da pessoa: 1,8 metros
 * Tamanho da sombra da pessoa: 2 metros
 * Tamanho da sombra do prédio: 20 metros
*/
function calculaAlturaPredio(alturaObjC, tamSombraP, tamSombraObjC) {
    var alturaP = (alturaObjC * tamSombraP) / tamSombraObjC;
    return alturaP;
}
var alturaPredio = calculaAlturaPredio(1.8, 20, 2);
console.log(alturaPredio);
