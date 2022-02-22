package com.unity.mynativeapp.realtimedb;

import com.google.firebase.database.Exclude;
import java.util.HashMap;
import java.util.Map;


// 각 user 정보를 임시저장하는 자바 객체
public class UserInfo
{
    public String uid;         //user 고유 id
    public String pw;          //user pw
    public String nickname;    //user nickname
    public String email;       //user email address

    public UserInfo() {

    }

    // UserInfo 객체 생성 시 매개변수 값을 객체에 저장
    public UserInfo(String uid, String pw, String nickname, String email){
        this.uid = uid;
        this.pw = pw;
        this.nickname = nickname;
        this.email = email;
    }

    // 객체에 저장된 정보를 HashMap 형태로 저장
    @Exclude
    public Map<String, Object> UsertoMap() {
        HashMap<String, Object> result = new HashMap<>();
        result.put("uid", uid);
        result.put("pw", pw);
        result.put("nickname", nickname);
        result.put("email", email);
        return result;
    }

    /*
    public String getUserpw() { return userpw; }
    public void setUserpw(String userpw) { this.userpw = userpw; }
    public String getNickname() { return nickname; }
    public void setNickname(String nickname) { this.nickname = nickname; }
    public String getEmail() { return email; }
    public void setEmail(String email) { this.email = email; }
     */
}