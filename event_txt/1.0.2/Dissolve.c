-------- EventFlow: Dissolve --------

Actor: Actor[Dissolve(actor)]
entrypoint: Dissolve(actor)
actions: ['SetFaceCullMode', 'SetAlphaCutoutEnabled']
queries: []
params: None

Actor: Actor[Undissolve(actor)]
entrypoint: Undissolve(actor)
actions: ['SetFaceCullMode', 'SetAlphaCutoutEnabled']
queries: []
params: None

void Dissolve() {
    Actor[Dissolve(actor)].SetFaceCullMode({'cullMode': 0})
    Actor[Dissolve(actor)].SetAlphaCutoutEnabled({'enabled': True})
}

void Undissolve() {
    Actor[Undissolve(actor)].SetFaceCullMode({'cullMode': 2})
    Actor[Undissolve(actor)].SetAlphaCutoutEnabled({'enabled': False})
}
