using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class TestCall : MonoBehaviour {

    [DllImport("RenderPlugin.dll")]
    private static extern int TestFunc();

    private string log;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnGUI()
    {
        if(GUILayout.Button("Native Call", GUILayout.Width(300), GUILayout.Height(200))){
            log = TestFunc().ToString();
        }
    }
}
