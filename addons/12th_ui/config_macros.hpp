
#define P(PATH) \x\12thMEU\addons\12th_ui\##PATH
#define QP(PATH) #P(PATH)

#define RSC_PIC(CLASSNAME,PATH) \
class CLASSNAME : RscPicture {  \
  idc=1;                        \
  x="SafeZoneX";                \
  y="SafeZoneY";                \
  h="SafeZoneH";                \
  w="SafeZoneW";                \
  text = QP(PATH);              \
};