import matplotlib.pyplot as plt
import json

sheet = json.load(open('gsheet_json/1.0.1/datasheets/ui/UiMapIconItem.json'))['rows']

for row in sheet:
    if row['mSymbol'] == "HeartPiece":
        color = "red"
        symbol = 'x'
        display = True
    elif row['mSymbol'] == "WorldGlobePiece":
        color = "blue"
        symbol = 'o'
        display = True
    for icon in row['mIconInfos']:
        if display and (icon["mPosX"],icon["mPosY"]) != (-255,-255):
            plt.plot([icon["mPosX"]],[icon["mPosY"]],symbol,color=color)
plt.gca().invert_yaxis()
plt.show()
