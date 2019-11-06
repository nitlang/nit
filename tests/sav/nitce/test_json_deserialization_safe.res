Deserialization Error: `DangerSub` is not a subtype of the static type `nullable A`
Deserialization Error: `DangerSub` is not a subtype of the static type ``
<A other:null next:null>
---
DANGER 'My text 1'
DANGER 'My text 2'
Deserialization Error: Wrong type on `A::other` expected `nullable A`, got `DangerSub`
Deserialization Error: Wrong type on `A::next` expected `C`, got `DangerSub`
<A other:null next:null>
---
Deserialization Error: `B` is not a subtype of the static type ``
<B other:null next:null>
---
Deserialization Error: `A` is not a subtype of the static type ``
<B other:null next:null>
---
Deserialization Error: `A` is not a subtype of the static type ``
Deserialization Error: Wrong type on `G::e` expected `E`, got `null`
<G e:not-set>
---
Deserialization Error: `A` is not a subtype of the static type ``
Deserialization Error: Wrong type on `G::e` expected `E`, got `null`
<G e:not-set>
