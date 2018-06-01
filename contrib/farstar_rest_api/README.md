FAR*STAR REST API
==

<p> Demo of REST API using Nit language</p>

## Caracteristics
This REST API renders ressources as JSON. In each of your calls you need to specify the header **Accept application/json** for **GET** request and use this header **Content-Type application/json** with the appropriate body to perform POST or PUT requests.

## Ressources
With this REST API, you can manage basically a Intergalactic Transport Company.

You can create differents Ship objects (Transport, War, Hybrid) and loading objects as Phaser, Blaster or Container.

Ships are used to load or equip the loading objects.
* WarShips can only equip weapons.
* TransportShips are used to load any others equipment according to his weight and volume capacity.
* HybridShips can do what the others can do.

Weapons can be equipped on WarShip only and loaded by the others.

Containers can only be load.

## Utilisation
There are several endpoints to consume following a specific business logic.

### Validation
The application is configured to accept only good requests, if something is not like it wants it will tell you.

### Routes
***Base URL***: http://localhost:8080/api

In your favorite browser or using postman you can hit those endpoints with the following methods:
* ***for all Resources***
  * **GET** on **base-url + uri** to retrieve the collection
  * **GET** **base-url + uri + /:id** to retrieve the specific object
  * **DELETE** **base-url + uri + /:id** to delete the specific object
* ***URI:*** <code>/containers/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 1,
      "volume": 1
  }
  ```
* ***URI:*** <code>/phasers/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 1,
      "volume": 1
  }
  ```
* ***URI:*** <code>/blasters/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 1,
      "volume": 1,
      "gaz_level": 12
  }
  ```
* ***URI:*** <code>/transportships/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 100,
      "volume": 100,
      "weight_capacity": 200,
      "volume_capacity": 90,
      "equipments":[id_of_equipment_to_load_1, id_of_equipment_to_load_2, ...]
  }
  ```
  * **PUT** on **base-url + uri + /:id** with this body:
  ```json
  {
      "id": 132456,
      "mass": 100,
      "volume": 100,
      "weight_capacity": 200,
      "volume_capacity": 90,
      "equipments":[new_id_equipment_to_load, old_id_of_equipment_to_load_, ...]
  }
  ```
* ***URI:*** <code>/hybridships/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 100,
      "volume": 100,
      "weight_capacity": 200,
      "volume_capacity": 90,
      "max_weapons_nb": 2,
      "equipments":[id_of_weapon_to_equip_1, id_of_equipment_to_load_2, ...]
  }
  ```
  * **PUT** on **base-url + uri + /:id** with this body:
  ```json
  {
      "id": 132456,
      "mass": 100,
      "volume": 100,
      "weight_capacity": 200,
      "volume_capacity": 90,
      "max_weapons_nb": 2,
      "equipments":[new_id_weapon_to_equip, new_id_of_equipment_to_load_, ...]
  }
  ```

* ***URI:*** <code>/heavywarships/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 100,
      "volume": 100,
      "max_weapons_nb": 2,
      "equipments":[id_of_weapon_to_equip_1, id_of_weapon_to_equip_2, ...]
  }
  ```
  * **PUT** on **base-url + uri + /:id** with this body:
  ```json
  {
      "id": 132456,
      "mass": 100,
      "volume": 100,
      "max_weapons_nb": 2,
      "equipments":[new_id_of_weapon_to_equip_1, old_id_of_weapon_to_equip_2, ...]
  }
  ```
* ***URI:*** <code>/lightwarships/</code>
  * **POST** on **base-url + uri** with this body:
  ```json
  {
      "mass": 100,
      "volume": 100,
      "max_weapons_nb": 2,
      "equipments":[id_of_phaser_to_equip_1, id_of_phaser_to_equip_2, ...]
  }
  ```
  * **PUT** on **base-url + uri + /:id** with this body:
  ```json
  {
      "id": 132456,
      "mass": 100,
      "volume": 100,
      "weight_capacity": 200,
      "volume_capacity": 90,
      "max_weapons_nb": 2,
      "equipments":[new_id_of_phaser_to_equip_1, old_id_of_phaser_to_equip_1, ...]
  }
  ```
