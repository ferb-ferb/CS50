var pointer = 0;
var number1 = 0;
var number2 = 0;
function texter(event){
    var trigger = event.srcElement;
    pointer = trigger.innerHTML;
}
function plus(){
    number1 = pointer;
}
function add(){
    alert(number1+pointer);
}