using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CashManager : MonoBehaviour
{
    public static CashManager instance;
    private int coins;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(instance);
        }
    }

    public void ExchangeProduct(ProductData productData)
    {
        AddCoin(productData.productPrice);
    }

    public void AddCoin(int price)
    {
        coins += price;
        //Debug.Log("Cash " + coins);
        DisplayCoins(); 
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void DisplayCoins()
    {
        UIManager.instance.ShowCoinCountOnScreen(coins);
    }
}
