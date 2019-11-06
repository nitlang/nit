Deserialization Error: `DangerSub` is not a subtype of the static type `nullable A`
Deserialization Error: `DangerSub` is not a subtype of the static type `nullable A`
<A other:null next:null>
---
DANGER 'My text 1'
DANGER 'My text 2'
Deserialization Error: Wrong type on `A::other` expected `nullable A`, got `DangerSub`
Deserialization Error: Wrong type on `A::next` expected `C`, got `DangerSub`
<A other:null next:null>
---

<B other:null next:<B other:null next:null>>
---
Deserialization Error: `A` is not a subtype of the static type `nullable B`
<B other:null next:null>
---

<G[A] e:<A other:null next:null>>
---
Deserialization Error: `A` is not a subtype of the static type `B`
Deserialization Error: Wrong type on `G[B]::e` expected `E`, got `null`
<G[B] e:not-set>
