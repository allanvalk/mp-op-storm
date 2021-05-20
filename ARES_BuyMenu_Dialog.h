#include "ARES_BuyMenu_Dialog_Control.h"
class ARES_BuyMenu_Dialog
{
	idd = -1;
	movingEnable = false;
	
	class ControlsBackground
	{
		class background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.22569445;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.54861112;
			style = 0;
			text = "";
			colorBackground[] = {0.6,0.6,0.6,0.5};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class title
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41601563;
			y = safeZoneY + safeZoneH * 0.20659723;
			w = safeZoneW * 0.16503907;
			h = safeZoneH * 0.109375;
			style = 2;
			text = "Ares Wargame";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0.2,0.2,0.2,1};
			font = "PuristaMedium";
			sizeEx = .08;
			
		};
		class subTitle
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.43554688;
			y = safeZoneY + safeZoneH * 0.27083334;
			w = safeZoneW * 0.12402344;
			h = safeZoneH * 0.05555556;
			style = 2;
			text = "Buy Menu";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0.2,0.2,0.2,1};
			font = "PuristaMedium";
			sizeEx = .065;
			
		};
		class veh1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1151 5";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1151_usarmy_wd', 5] call ARES_buyEntity;";
			
		};
		class veh2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1151-M240 6";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1151_m240_v1_usarmy_wd', 6] call ARES_buyEntity;";
			
		};
		class veh3
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1151-M2 8";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1151_m2_v1_usarmy_wd', 8] call ARES_buyEntity;";
			
		};
		class veh4
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1151-M2CR 10";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1151_m2crows_usarmy_wd', 10] call ARES_buyEntity;";
			
		};
		class veh5
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "FIM Kit 25";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Box_Syndicate_Ammo_F', 25, [['rhs_weap_fim92','rhs_fim92_mag'],[1,5]]] call ARES_buyCrate;";
			
		};
		class veh6
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Javelin Kit 35";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Box_Syndicate_Ammo_F', 35, [['rhs_weap_fgm148','rhs_fgm148_magazine_AT'],[1,5]]] call ARES_buyCrate;";
			
		};
		class veh7
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1126-M2 20";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_stryker_m1126_m2_wd', 20] call ARES_buyEntity;";
			
		};
		class veh8
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1134 30";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_stryker_m1134_wd', 30] call ARES_buyEntity;";
			
		};
		class veh1_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "LAV25 35";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['UK3CB_CW_US_B_LATE_LAV25', 35] call ARES_buyEntity;";
			
		};
		class veh2_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M2A3 50";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M2A3_wd', 50] call ARES_buyEntity;";
			
		};
		class veh3_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "MH-6M 30";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_MELB_MH6M', 30] call ARES_buyEntity;";
			
		};
		class veh4_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "UH-60M 35";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_UH60M', 35] call ARES_buyEntity;";
			
		};
		class veh5_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "AH-6M 50";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_MELB_AH6M', 50] call ARES_buyEntity;";
			
		};
		class veh6_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240 10";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_usarmy_wd', 10] call ARES_buyEntity;";
			
		};
		class veh7_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240-M240 12";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_m240_usarmy_wd', 12] call ARES_buyEntity;";
			
		};
		class veh8_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240-M2 15";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_m2_usarmy_wd', 15] call ARES_buyEntity;";
			
		};
		class veh1_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Cougar 5";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['UK3CB_B_MaxxPro_M2_US_W', 15] call ARES_buyEntity;";
			
		};
		class veh2_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1083A1P2 10";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_M1083A1P2_B_WD_fmtv_usarmy', 10] call ARES_buyEntity;";
			
		};
		class veh3_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M2 5";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M2StaticMG_WD', 5] call ARES_buyEntity;";
			
		};
		class veh4_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "MK19 15";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_MK19_TriPod_WD', 15] call ARES_buyEntity;";
			
		};
		class veh5_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M252 25";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M252_WD', 25] call ARES_buyEntity;";
			
		};
		class veh6_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "TOW 20";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_TOW_TriPod_WD', 20] call ARES_buyEntity;";
			
		};
		class veh7_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Stinger AA 30";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_Stinger_AA_pod_WD', 30] call ARES_buyEntity;";
			
		};
		class veh8_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M119 45";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M119_D', 45] call ARES_buyEntity;";
			
		};
		
	};
	class Controls
	{
		
	};
	
};

class ARES_BuildMenu_Dialog
{
	idd = -1;
	movingEnable = false;
	
	class ControlsBackground
	{
		class background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.22569445;
			w = safeZoneW * 0.41210938;
			h = safeZoneH * 0.54861112;
			style = 0;
			text = "";
			colorBackground[] = {0.6,0.6,0.6,0.5};
			colorText[] = {0.102,0.102,0.102,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class title
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41601563;
			y = safeZoneY + safeZoneH * 0.20659723;
			w = safeZoneW * 0.16503907;
			h = safeZoneH * 0.109375;
			style = 2;
			text = "Ares Wargame";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0.2,0.2,0.2,1};
			font = "PuristaMedium";
			sizeEx = .08;
			
		};
		class subTitle
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.43554688;
			y = safeZoneY + safeZoneH * 0.27083334;
			w = safeZoneW * 0.12402344;
			h = safeZoneH * 0.05555556;
			style = 2;
			text = "Build Menu";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0.2,0.2,0.2,1};
			font = "PuristaMedium";
			sizeEx = .065;
			
		};
		class veh1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_BagFence_Long_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_BagFence_Long_F', 1, player] spawn ARES_build;";
			
		};
		class veh2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrierTower_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrierTower_F', 1, player] spawn ARES_build;";
			
		};
		class veh3
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrier_1_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrier_1_F', 1, player] spawn ARES_build;";
			
		};
		class veh4
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrier_3_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrier_3_F', 1, player] spawn ARES_build;";
			
		};
		class veh5
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrier_5_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrier_5_F', 1, player] spawn ARES_build;";
			
		};
		class veh6
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrier_Big_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrier_Big_F', 1, player] spawn ARES_build;";
			
		};
		class veh7
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrierWall4_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrierWall4_F', 1, player] spawn ARES_build;";
			
		};
		class veh8
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33886719;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrierWall6_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrierWall6_F', 1, player] spawn ARES_build;";
			
		};
		class veh1_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrierWall_corner_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrierWall_corner_F', 1, player] spawn ARES_build;";
			
		};
		class veh2_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_HBarrierWall_corridor_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_HBarrierWall_corridor_F', 1, player] spawn ARES_build;";
			
		};
		class veh3_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_BarGate_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_BarGate_F', 1, player] spawn ARES_build;";
			
		};
		class veh4_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_Mil_WallBig_4m_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_Mil_WallBig_4m_F', 1, player] spawn ARES_build;";
			
		};
		class veh5_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Land_Mil_WallBig_Corner_F";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['Land_Mil_WallBig_Corner_F', 1, player] spawn ARES_build;";
			
		};
		class veh6_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240 10";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_usarmy_wd', 10] call ARES_buyEntity;";
			
		};
		class veh7_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240-M240 12";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_m240_usarmy_wd', 12] call ARES_buyEntity;";
			
		};
		class veh8_copy1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4609375;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1240-M2 15";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_m1240a1_m2_usarmy_wd', 15] call ARES_buyEntity;";
			
		};
		class veh1_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.35243056;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1078A1P2 5";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_M1078A1P2_B_WD_fmtv_usarmy', 5] call ARES_buyEntity;";
			
		};
		class veh2_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.40104167;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M1083A1P2 10";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['rhsusf_M1083A1P2_B_WD_fmtv_usarmy', 10] call ARES_buyEntity;";
			
		};
		class veh3_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.44965278;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M2 5";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M2StaticMG_WD', 5] call ARES_buyEntity;";
			
		};
		class veh4_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.49826389;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "MK19 15";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_MK19_TriPod_WD', 15] call ARES_buyEntity;";
			
		};
		class veh5_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.546875;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M252 25";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M252_WD', 25] call ARES_buyEntity;";
			
		};
		class veh6_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.59548612;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "TOW 20";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_TOW_TriPod_WD', 20] call ARES_buyEntity;";
			
		};
		class veh7_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.64409723;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Stinger AA 30";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_Stinger_AA_pod_WD', 30] call ARES_buyEntity;";
			
		};
		class veh8_copy2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.58300782;
			y = safeZoneY + safeZoneH * 0.69270834;
			w = safeZoneW * 0.07421875;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "M119 45";
			borderSize = 0.1;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.302,0.302,0.302,1};
			colorBackgroundDisabled[] = {0.502,0.502,0.502,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "['RHS_M119_D', 45] call ARES_buyEntity;";
			
		};
		
	};
	class Controls
	{
		
	};
	
};