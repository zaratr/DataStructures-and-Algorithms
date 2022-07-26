package datastructures.hashtablessecond;

public class Pair<K, V>
{
  private K key;
  private V value;
  public Pair(K key, V value){this.key = key; this.value = value;}
  public K getKey(){ return this.key;}
  public V getValue(){ return this.value;}
  public V setValue(V value){V previousValue = this.value; this.value = value; return previousValue;}
  public int hashCode(){ return (key == null ? 0 : key.hashCode()) ^ (value == null ? 0 : value.hashCode());}
}
