package com.unity.mynativeapp.fragment.recycle.tflite;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.util.Log;
import com.unity.mynativeapp.R;

public class Labelclass  {
    public static final String TAG = "[IC]label";
    public int Labelclass_function(String Str) {
        int returnvalue = 0;

        if( Str.equals("dining table")|| Str.equals("abaya")|| Str.equals("academic gown")|| Str.equals("apron") || Str.equals("bath towel") || Str.equals("bikini")  || Str.equals("bolo tie") || Str.equals("brassiere") || Str.equals("buckle")|| Str.equals("bullet proof vest") ||  Str.equals("cardigan")||  Str.equals("Christmas stocking")||  Str.equals("cloak")||  Str.equals("cowboy boot") ||  Str.equals("cowboy hat")||  Str.equals("dishrag") ||  Str.equals("feather boa") ||  Str.equals("fur coat")){
            Log.e(TAG, "의류 1  ");
            returnvalue = 1;

        }
        else if(Str.equals("gown") ||Str.equals("jean") ||Str.equals("jersey")||Str.equals("labcoat")|| Str.equals("maillot")||Str.equals("military uniform")||Str.equals("pajama")||Str.equals("running shoe")||Str.equals("sandal")||Str.equals("sock")||Str.equals("trench coat")||Str.equals("over skirt")){
            Log.e(TAG, "의류2 ");
            returnvalue = 2;
        }
        else if(Str.equals("beer bottle")||Str.equals("beer glass")||Str.equals("goblet")||Str.equals("measuring cup")||Str.equals("water bottle")||Str.equals("whiskey jug")||Str.equals("wine bottle")||Str.equals("cup")) {
            Log.e(TAG, "유리");
            returnvalue = 3;

        }
        else if(Str.equals("coffee mug")||Str.equals("mixing bowl")||Str.equals("petri dish")||Str.equals("salt shaker")||Str.equals("soup bowl")) {
            Log.e(TAG, "도자기");
            returnvalue = 4;

        }
        else if(Str.equals("wok")||Str.equals("teapot")||Str.equals("pot")||Str.equals("hair spray")||Str.equals("Crock Pot")) {
            Log.e(TAG, "금속");
            returnvalue = 5;

        }
        else if(Str.equals("plasticbag")) {
            Log.e(TAG, "비닐류");
            returnvalue = 6;


        }
        else if(Str.equals("umbrella")) {
            Log.e(TAG, "우산");
            returnvalue = 7;

        }
        else if(Str.equals("toilettissue")) {
            Log.e(TAG, "화장지");
            returnvalue = 8;

        }
        else{
            Log.e(TAG, "분리수거할 수 있을 만한 것을 찾지 못했어요 다시 검색해주세요");
            returnvalue = 9;
        }
        return returnvalue;
    }

}
