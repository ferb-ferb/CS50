var pointer = 0;
var number1 = 0;
var disp = "0";
var number2 = 0;
function texter(event){
    var trigger = event.srcElement;
    pointer = trigger.innerHTML;
}
function plus(){
    number1 = parseInt(disp);
}
function add(){
    let z = number1 + parseInt(pointer);
    document.getElementById("display").value = z;
  //  alert(z);
    number1 = 0;
    pointer =0;
}
function update(event){
    var trig = event.srcElement
    pointer = trig.innerHTML;
    if(disp != "0"){disp = disp + pointer;}
    else{disp=pointer;}
    document.getElementById("display").value = disp;
}