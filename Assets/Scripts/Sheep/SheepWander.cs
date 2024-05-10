using UnityEngine;

public class SheepWander : MonoBehaviour
{
    public float wanderRadius = 5f; // Koyunun rastgele dola�ma yar��ap�
    public float wanderTimer = 2f; // Koyunun rastgele y�nde hareket etme s�resi
    public float moveSpeed = 2f; // Koyunun hareket h�z�
    public LayerMask obstacleMask; // Engel maskesi

    private Transform sheepTransform;
    private float timer;
    private Vector3 startPosition;
    private Vector3 targetPosition;
    private bool isMoving = false;
    private GameObject player; // Oyuncu objesi

    void Start()
    {
        sheepTransform = transform;
        timer = wanderTimer;
        startPosition = sheepTransform.position;
        targetPosition = startPosition;
    }

    void Update()
    {
        if (player == null)
            return; // Oyuncu atanmad�ysa i�lem yapma

        // Oyuncudan ka� veya rastgele hareket et
        if (!isMoving)
        {
            timer += Time.deltaTime;

            if (timer >= wanderTimer)
            {
                targetPosition = GetRandomPositionInRadius(startPosition, wanderRadius);
                timer = 0;
                isMoving = true;
            }
        }
        else
        {
            float distance = Vector3.Distance(sheepTransform.position, targetPosition);
            if (distance > 0.1f)
            {
                MoveTowards(targetPosition);
            }
            else
            {
                isMoving = false;
            }
        }
    }

    // Verilen merkez noktadan belirtilen yar��apa kadar rastgele bir konum d�nd�ren metod
    Vector3 GetRandomPositionInRadius(Vector3 origin, float radius)
    {
        Vector3 randomDirection = Random.insideUnitSphere * radius;
        randomDirection += origin;

        randomDirection.y = sheepTransform.position.y; // Koyunun y�ksekli�ini koru

        return randomDirection;
    }

    // Hedef konuma yava��a hareket etmeyi sa�layan metod
    void MoveTowards(Vector3 targetPosition)
    {
        sheepTransform.position = Vector3.MoveTowards(sheepTransform.position, targetPosition, moveSpeed * Time.deltaTime);
    }

    // Oyuncu objesini koyuna atayan metod
    public void SetPlayer(GameObject playerObject)
    {
        player = playerObject;
    }
}
