<?php

/**
 * @file
 * cths_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cths_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Associate XML Forms'.
  $permissions['Associate XML Forms'] = array(
    'name' => 'Associate XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Create XML Forms'.
  $permissions['Create XML Forms'] = array(
    'name' => 'Create XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Delete XML Forms'.
  $permissions['Delete XML Forms'] = array(
    'name' => 'Delete XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit XML Forms'.
  $permissions['Edit XML Forms'] = array(
    'name' => 'Edit XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit existing OCR stream'.
  $permissions['Edit existing OCR stream'] = array(
    'name' => 'Edit existing OCR stream',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_paged_content',
  );

  // Exported permission: 'List XML Forms'.
  $permissions['List XML Forms'] = array(
    'name' => 'List XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'add fedora datastreams'.
  $permissions['add fedora datastreams'] = array(
    'name' => 'add fedora datastreams',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'administer compound relationships'.
  $permissions['administer compound relationships'] = array(
    'name' => 'administer compound relationships',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_compound_object',
  );

  // Exported permission: 'administer islandora entities'.
  $permissions['administer islandora entities'] = array(
    'name' => 'administer islandora entities',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_entities',
  );

  // Exported permission: 'administer islandora ip embargoes'.
  $permissions['administer islandora ip embargoes'] = array(
    'name' => 'administer islandora ip embargoes',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'administer islandora oai'.
  $permissions['administer islandora oai'] = array(
    'name' => 'administer islandora oai',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_oai',
  );

  // Exported permission: 'administer islandora spreadsheet ingest'.
  $permissions['administer islandora spreadsheet ingest'] = array(
    'name' => 'administer islandora spreadsheet ingest',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_spreadsheet_ingest',
  );

  // Exported permission: 'administer islandora_bookmark'.
  $permissions['administer islandora_bookmark'] = array(
    'name' => 'administer islandora_bookmark',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'administer islandora_solr_metadata'.
  $permissions['administer islandora_solr_metadata'] = array(
    'name' => 'administer islandora_solr_metadata',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr_metadata',
  );

  // Exported permission: 'administer islandora_xacml_api'.
  $permissions['administer islandora_xacml_api'] = array(
    'name' => 'administer islandora_xacml_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_api',
  );

  // Exported permission: 'administer islandora_xacml_editor'.
  $permissions['administer islandora_xacml_editor'] = array(
    'name' => 'administer islandora_xacml_editor',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_editor',
  );

  // Exported permission: 'administer xacml inheritance'.
  $permissions['administer xacml inheritance'] = array(
    'name' => 'administer xacml inheritance',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_editor',
  );

  // Exported permission: 'bypass inactive object state'.
  $permissions['bypass inactive object state'] = array(
    'name' => 'bypass inactive object state',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'can embargo any object'.
  $permissions['can embargo any object'] = array(
    'name' => 'can embargo any object',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_scholar_embargo',
  );

  // Exported permission: 'can embargo owned objects'.
  $permissions['can embargo owned objects'] = array(
    'name' => 'can embargo owned objects',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_scholar_embargo',
  );

  // Exported permission: 'control islandora ip embargoes'.
  $permissions['control islandora ip embargoes'] = array(
    'name' => 'control islandora ip embargoes',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'create child collection'.
  $permissions['create child collection'] = array(
    'name' => 'create child collection',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'create datastreams'.
  $permissions['create datastreams'] = array(
    'name' => 'create datastreams',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'create objects'.
  $permissions['create objects'] = array(
    'name' => 'create objects',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'create relationships'.
  $permissions['create relationships'] = array(
    'name' => 'create relationships',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete datastreams'.
  $permissions['delete datastreams'] = array(
    'name' => 'delete datastreams',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete fedora objects and datastreams'.
  $permissions['delete fedora objects and datastreams'] = array(
    'name' => 'delete fedora objects and datastreams',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'delete objects'.
  $permissions['delete objects'] = array(
    'name' => 'delete objects',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete relationships'.
  $permissions['delete relationships'] = array(
    'name' => 'delete relationships',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'edit fedora metadata'.
  $permissions['edit fedora metadata'] = array(
    'name' => 'edit fedora metadata',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'edit scholar metadata'.
  $permissions['edit scholar metadata'] = array(
    'name' => 'edit scholar metadata',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_entities',
  );

  // Exported permission: 'export islandora bookmarks'.
  $permissions['export islandora bookmarks'] = array(
    'name' => 'export islandora bookmarks',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'generate datastream token'.
  $permissions['generate datastream token'] = array(
    'name' => 'generate datastream token',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'ingest fedora objects'.
  $permissions['ingest fedora objects'] = array(
    'name' => 'ingest fedora objects',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'islandora_batch_manage_queue'.
  $permissions['islandora_batch_manage_queue'] = array(
    'name' => 'islandora_batch_manage_queue',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_batch',
  );

  // Exported permission: 'list relationships'.
  $permissions['list relationships'] = array(
    'name' => 'list relationships',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'manage collection policy'.
  $permissions['manage collection policy'] = array(
    'name' => 'manage collection policy',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'manage deleted objects'.
  $permissions['manage deleted objects'] = array(
    'name' => 'manage deleted objects',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'manage inactive objects'.
  $permissions['manage inactive objects'] = array(
    'name' => 'manage inactive objects',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'manage islandora ip embargoes'.
  $permissions['manage islandora ip embargoes'] = array(
    'name' => 'manage islandora ip embargoes',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'manage object properties'.
  $permissions['manage object properties'] = array(
    'name' => 'manage object properties',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'manage usage stats'.
  $permissions['manage usage stats'] = array(
    'name' => 'manage usage stats',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_usage_stats',
  );

  // Exported permission: 'migrate collection members'.
  $permissions['migrate collection members'] = array(
    'name' => 'migrate collection members',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'modify datastreams'.
  $permissions['modify datastreams'] = array(
    'name' => 'modify datastreams',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'modify object properties'.
  $permissions['modify object properties'] = array(
    'name' => 'modify object properties',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'regenerate derivatives for an object'.
  $permissions['regenerate derivatives for an object'] = array(
    'name' => 'regenerate derivatives for an object',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'replace a datastream with new content, preserving version history'.
  $permissions['replace a datastream with new content, preserving version history'] = array(
    'name' => 'replace a datastream with new content, preserving version history',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'revert to old datastream'.
  $permissions['revert to old datastream'] = array(
    'name' => 'revert to old datastream',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'search islandora solr'.
  $permissions['search islandora solr'] = array(
    'name' => 'search islandora solr',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'share islandora bookmarks'.
  $permissions['share islandora bookmarks'] = array(
    'name' => 'share islandora bookmarks',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'use islandora spreadsheet ingest'.
  $permissions['use islandora spreadsheet ingest'] = array(
    'name' => 'use islandora spreadsheet ingest',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_spreadsheet_ingest',
  );

  // Exported permission: 'use islandora_bookmark'.
  $permissions['use islandora_bookmark'] = array(
    'name' => 'use islandora_bookmark',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'view and delete a list of orphaned objects'.
  $permissions['view and delete a list of orphaned objects'] = array(
    'name' => 'view and delete a list of orphaned objects',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view datastreams'.
  $permissions['view datastreams'] = array(
    'name' => 'view datastreams',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'view fedora repository objects'.
  $permissions['view fedora repository objects'] = array(
    'name' => 'view fedora repository objects',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view islandora solr debug'.
  $permissions['view islandora solr debug'] = array(
    'name' => 'view islandora solr debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'view islandora usage stats collection overview stats'.
  $permissions['view islandora usage stats collection overview stats'] = array(
    'name' => 'view islandora usage stats collection overview stats',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_usage_stats',
  );

  // Exported permission: 'view islandora usage stats reports'.
  $permissions['view islandora usage stats reports'] = array(
    'name' => 'view islandora usage stats reports',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'Staff' => 'Staff',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_usage_stats',
  );

  // Exported permission: 'view objects'.
  $permissions['view objects'] = array(
    'name' => 'view objects',
    'roles' => array(),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'view old datastream versions'.
  $permissions['view old datastream versions'] = array(
    'name' => 'view old datastream versions',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view technical metadata'.
  $permissions['view technical metadata'] = array(
    'name' => 'view technical metadata',
    'roles' => array(
      'Collection Administrator' => 'Collection Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_fits',
  );

  return $permissions;
}
