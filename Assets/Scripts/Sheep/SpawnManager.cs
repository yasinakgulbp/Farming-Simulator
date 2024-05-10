using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject cowPrefab; // Koyun prefab�
    public int numberOfCowsToSpawn = 5; // Koyun say�s�
    public GameObject cowBossPrefab; // Boss koyun prefab�
    public int numberOfCowBossesToSpawn = 1; // Boss koyun say�s�
    public Vector3 spawnAreaSize = new Vector3(20f, 1f, 20f); // Spawn edilecek alan�n boyutu

    void Start()
    {
        SpawnCows();
        SpawnCowBosses();
    }

    void SpawnCows()
    {
        for (int i = 0; i < numberOfCowsToSpawn; i++)
        {
            SpawnCow(cowPrefab);
        }
    }

    void SpawnCowBosses()
    {
        for (int i = 0; i < numberOfCowBossesToSpawn; i++)
        {
            SpawnCow(cowBossPrefab);
        }
    }

    void SpawnCow(GameObject prefab)
    {
        Vector3 spawnPosition = new Vector3(Random.Range(-spawnAreaSize.x / 2f, spawnAreaSize.x / 2f),
                                            spawnAreaSize.y / 2f,
                                            Random.Range(-spawnAreaSize.z / 2f, spawnAreaSize.z / 2f)); // Rastgele spawn pozisyonu se�me
        Quaternion spawnRotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f); // Rastgele d�nme

        Instantiate(prefab, spawnPosition, spawnRotation); // Koyunu spawn etme
    }
}
