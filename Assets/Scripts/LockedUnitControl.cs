using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LockedUnitControl : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField] private int price;

    [Header("Objects")]
    [SerializeField] private TextMeshPro priceText;
    [SerializeField] private GameObject lockedUnit;
    [SerializeField] private GameObject UnlockedUnit;
    private bool isPurchased;
    // Start is called before the first frame update
    void Start()
    {
        priceText.text = price.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !isPurchased)
        {
            //ÜRünü paran yeterse aç
            UnlockUnit();
        }
    }
    private void UnlockUnit()
    {
        //parasý var mý kontrol et
        //Varsa ürünü aç
        if (CashManager.instance.TryBuyThisUnit(price))
        {
            Unlock();
        }
        
    }

    private void Unlock()
    {
        isPurchased = true;
        lockedUnit.SetActive(false);
        UnlockedUnit.SetActive(true);
    }
}
