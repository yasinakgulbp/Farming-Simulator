using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BagController : MonoBehaviour
{
    [SerializeField] private Transform bag;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Respawn"))
        {
            AddProductToBag(other.gameObject)
;            Debug.Log("küp ile çarpýþýldý!");
        }
    }

    public void AddProductToBag(GameObject cube)
    {
        cube.transform.SetParent(bag, true);
        cube.transform.localRotation = Quaternion.identity;
        cube.transform.localPosition = Vector3.zero;
    }
}
