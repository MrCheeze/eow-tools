-------- EventFlow: ItemSmoothieIngredient --------

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['ShowKeep', 'Show']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

void Message0() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient00'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient00'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient00'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient00'})
    }
}

void Get0() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient00', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Message1() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient01'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient01'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient01'})
        Dialog.Show({'message': 'ItemGet:Ingredient01_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient01'})
    }
}

void Message2() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient02'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient02'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient02'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient02'})
    }
}

void Message3() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient03'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient03'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient03'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient03'})
    }
}

void Message4() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient04'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient04'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient04'})
        Dialog.Show({'message': 'ItemGet:Ingredient04_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient04'})
    }
}

void Message5() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient05'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient05'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient05'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient05'})
    }
}

void Message6() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient06'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient06'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient06'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient06'})
    }
}

void Message7() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient07'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient07'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient07'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient07'})
    }
}

void Message8() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient08'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient08'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient08'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient08'})
    }
}

void Message9() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient09'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient09'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient09'})
        Dialog.Show({'message': 'ItemGet:Ingredient09_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient09'})
    }
}

void Message10() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient10'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient10'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient10'})
        Dialog.Show({'message': 'ItemGet:Ingredient10_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient10'})
    }
}

void Message11() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient11'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient11'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient11'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient11'})
    }
}

void Message12() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient12'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient12'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient12'})
        Dialog.Show({'message': 'ItemGet:Ingredient12_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient12'})
    }
}

void Message13() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient13'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient13'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient13'})
        Dialog.Show({'message': 'ItemGet:Ingredient13_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient13'})
    }
}

void Get1() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient01', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get2() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient02', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get3() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient03', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get4() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient04', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get5() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient05', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get6() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient06', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get7() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient07', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get8() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient08', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get9() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient09', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get10() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient10', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get11() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient11', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get12() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient12', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get13() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient13', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Get14() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient14', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Message14() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient14'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient14'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient14'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient14'})
    }
}

void Get15() {
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient15', 'count': 'count', 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void Message15() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient15'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient15'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient15'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient15'})
    }
}

void Message0_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient00'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient00'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient00'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient00'})
    }
}

void Message1_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient01'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient01'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient01'})
        Dialog.Show({'message': 'ItemGet:Ingredient01_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient01'})
    }
}

void Message2_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient02'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient02'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient02'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient02'})
    }
}

void Message3_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient03'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient03'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient03'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient03'})
    }
}

void Message4_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient04'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient04'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient04'})
        Dialog.Show({'message': 'ItemGet:Ingredient04_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient04'})
    }
}

void Message5_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient05'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient05'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient05'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient05'})
    }
}

void Message6_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient06'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient06'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient06'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient06'})
    }
}

void Message7_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient07'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient07'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient07'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient07'})
    }
}

void Message8_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient08'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient08'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient08'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient08'})
    }
}

void Message9_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient09'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient09'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient09'})
        Dialog.Show({'message': 'ItemGet:Ingredient09_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient09'})
    }
}

void Message10_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient10'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient10'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient10'})
        Dialog.Show({'message': 'ItemGet:Ingredient10_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient10'})
    }
}

void Message11_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient11'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient11'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient11'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient11'})
    }
}

void Message12_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient12'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient12'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient12'})
        Dialog.Show({'message': 'ItemGet:Ingredient12_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient12'})
    }
}

void Message13_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient13'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient13'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient13'})
        Dialog.Show({'message': 'ItemGet:Ingredient13_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient13'})
    }
}

void Message14_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient14'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient14'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient14'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient14'})
    }
}

void Message15_many() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient15'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient15'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient15'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient15'})
    }
}
