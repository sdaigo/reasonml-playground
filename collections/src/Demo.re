let myShirt: ShirtSize.t = ShirtSize.XLarge(1);
let myPrice = ShirtSize.price(myShirt);

Js.log(ShirtSize.toFixed(myPrice, ~digits=2));