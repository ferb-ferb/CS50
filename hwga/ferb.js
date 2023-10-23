var text= "";
function texter(event){
    var trigger = event.srcElement;
    text = trigger.innerHTML;
}
function print(){
    alert(text);
}