module server

import farstar_controller
import nitcorn

private import json
# Listening interface
fun iface: String do return "0.0.0.0:8080"

# Setup routes
var vh = new VirtualHost(iface)

#repository in order to emulate a database storage
var equipment_repository = new EquipmentRepository
equipment_repository.add_fixtures_data

vh.routes.add new Route("/api/equipments/:id", new EquipmentRestController(equipment_repository))
vh.routes.add new Route("/api/transportships/:id", new TransportShipRestController(equipment_repository))
vh.routes.add new Route("/api/heavywarships/:id", new HeavyWarShipRestController(equipment_repository))
vh.routes.add new Route("/api/lightwarships/:id", new LightWarShipRestController(equipment_repository))
vh.routes.add new Route("/api/hybridships/:id", new HybridShipRestController(equipment_repository))
vh.routes.add new Route("/api/phasers/:id", new PhaserRestController(equipment_repository))
vh.routes.add new Route("/api/blasters/:id", new BlasterRestController(equipment_repository))
vh.routes.add new Route("/api/containers/:id", new ContainerRestController(equipment_repository))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh

print "Launching server on http://{iface}/"
factory.run
