package com.cqz.jnidemo1;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
    }

    private void initView() {
        TextView textTv= (TextView) findViewById(R.id.tv_text);
        textTv.setText(stringFromJNI());
    }

    public native  String stringFromJNI();
    static {
        System.loadLibrary("hello-jni");
    }
}
