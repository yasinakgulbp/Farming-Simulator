using UnityEngine;

public class SheepSpawner : MonoBehaviour
{
    public GameObject sheepPrefab; // Olu�turulacak koyun prefab�
    public int sheepCount = 5; // Olu�turulacak koyun say�s�
    public float spawnRadius = 10f; // Koyunlar�n spawn edilece�i alan�n yar��ap�

    void Start()
    {
        SpawnSheep();
    }

    void SpawnSheep()
    {
        for (int i = 0; i < sheepCount; i++)
        {
            // Belirtilen alanda rastgele bir nokta se�
            Vector3 spawnPosition = GetRandomSpawnPosition();

            // Koyunu spawn et
            GameObject newSheep = Instantiate(sheepPrefab, spawnPosition, Quaternion.identity);
        }
    }

    Vector3 GetRandomSpawnPosition()
    {
        // Belirtilen alanda rastgele bir nokta se�
        Vector2 randomPoint = Random.insideUnitCircle * spawnRadius;
        Vector3 spawnPosition = new Vector3(randomPoint.x, 0f, randomPoint.y) + transform.position;
        return spawnPosition;
    }
}
