-------- EventFlow: BookCommon --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult']
params: None

void ImpasLetter() {
    Dialog.Show({'message': 'scenario/StoryAreaHyruleCastle:ImpasLetter_020'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Dialog.Show({'message': 'scenario/StoryAreaHyruleCastle:ImpasLetter_030'})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Dialog.Show({'message': 'scenario/StoryAreaHyruleCastle:ImpasLetter_040'})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                Dialog.Show({'message': 'scenario/StoryAreaHyruleCastle:ImpasLetter_050'})
            }
        }
    }
}
