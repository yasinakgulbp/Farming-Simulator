using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LockedUnitControl : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField] private int price;
    [SerializeField] private int ID;

    [Header("Objects")]
    [SerializeField] private TextMeshPro priceText;
    [SerializeField] private GameObject lockedUnit;
    [SerializeField] private GameObject UnlockedUnit;
    private bool isPurchased;
    private string keyUnit = "KeyUnit";
    // Start is called before the first frame update
    void Start()
    {
        priceText.text = price.ToString();
        LoadUnit();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !isPurchased)
        {
            //�R�n� paran yeterse a�
            UnlockUnit();
        }
    }
    private void UnlockUnit()
    {
        //paras� var m� kontrol et
        //Varsa �r�n� a�
        if (CashManager.instance.TryBuyThisUnit(price))
        {
            Unlock();
            SaveUnit();
        }
        
    }

    private void Unlock()
    {
        isPurchased = true;
        lockedUnit.SetActive(false);
        UnlockedUnit.SetActive(true);
    }

    private void SaveUnit()
    {
        string key = keyUnit + ID.ToString();
        // "KeyUnit"
        PlayerPrefs.SetString(key, "saved");
    }

    private void LoadUnit()
    {
        string key = keyUnit + ID.ToString();
        string status = PlayerPrefs.GetString(key);

        if (status.Equals("saved"))
        {
            Unlock();
        }
    }
}
