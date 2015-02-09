<?php
//Instance für ein einfaches Textfeld
function installHelper_getInstance_shortText($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance= array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'text_textfield',
       ),
       'display' => array(
           'default' => array(
               'label' => 'above',
               'type' => 'text',
           ),
       ),
       'description' => $description,
   );
   return $instance;
}
//Instance für ein langes Textfeld
function installHelper_getInstance_longText($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance= array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'text_textarea',
       ),
       'display' => array(
           'default' => array(
               'label' => 'above',
               'type' => 'text_long',
           ),
       ),
       'description' => $description,
   );
   return $instance;
}
 
 
//Instance für eine einfache FieldCollection
function installHelper_getInstance_FieldCollection($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance = array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'field_collection_embed',
       ),
       'display' => array(
           'default' => array(
               'label' => 'above',
               'type' => 'field_collection_items',
           ),
       ),
       'description' => $description,
   );
return $instance;
}
//Instance für ein Taxonomyfeld
function installHelper_getInstance_TermRef($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance = array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'options_select',
       ),
       'display' => array(
           'default' => array('type' => 'hidden'),
           'teaser' => array('type' => 'hidden')
       ),
       'description' => $description,
   );
return $instance;
}
 
 
//Instance für ein einfaches Booleanfeld
function installHelper_getInstance_Boolean($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance = array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'weight' => '12',
           'type' => 'options_onoff', //muss noch dynamisch ueber die Funktion abgebildet werden
           'module' => 'options',
           'active' => 1,
       ),
       'display' => array(
           'default' => array('type' => 'above'),
       ),
       'description' => $description,
   );
return $instance;
}
 
//Instance für ein einfaches Integerfeld
function installHelper_getInstance_Integer($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance = array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'number',
       ),
       'display' => array(
           'default' => array('type' => 'above'),
       ),
       'description' => $description,
   );
return $instance;
}
 
//Instance für ein einfaches Integerfeld
function installHelper_getInstance_Decimal($t,$name,$label,$bundle,$entity_type,$description)
{
   $instance = array(
       'field_name' => $name,
       'label'       => $t($label),
       'bundle' => $bundle,
       'entity_type' => $entity_type,
       'widget'      => array(
           'type'    => 'number',
       ),
       'display' => array(
           'default' => array('type' => 'above'),
       ),
       'description' => $description,
   );
return $instance;
}
 
//Image
function installHelper_getInstance_Image($t,$name,$label,$bundle,$entity_type,$description)
{
        $instance = array(
                'field_name' => $name,
                'label'       => $t($label),
                'bundle' => $bundle,
                'entity_type' => $entity_type,
                'widget'      => array(
                        'type'    => 'image_image',
                ),
                'display' => array(
                        'default' => array('type' => 'above'),
                ),
 
                'description' => $description,
        );
return $instance;
}
 
//GIS
function installHelper_getInstance_Geometry($t,$name,$label,$bundle,$entity_type,$description)
{
    $instance = array(
        'label' => $t($label),
        'module' => 'geofield',
        'weight' => 1,
        'required' => 0,
        'description' => $description,
        'default_value' => NULL,
        'field_name' => $name,
        'entity_type' => $entity_type,
        'bundle' => $bundle,
        'deleted' => '0',
        'widget' => array(
            'weight' => '-3',
            'type' => 'geofield_wkt',
            'module' => 'geofield',
            'active' => 1,
            'settings' => array(
                'html5_geolocation' => 0,
            ),
        ),
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'display' => array(
            'default' => array(
                'label' => 'above',
                'type' => 'geofield_wkt',
                'settings' => array(
                    'data' => 'full',
                ),
            ),
            'teaser' => array(
                'type' => 'hidden',
                'label' => 'above',
                'settings' => array(),
                'weight' => 0,
            ),
        ),        
    );
    return $instance;
}                                                                      

 
//GIS
function installHelper_getInstance_Point($t,$name,$label,$bundle,$entity_type,$description,$labeldisplay)
{
    $instance = array(
        'label' => $t($label),
        'module' => 'geofield',
        'weight' => 1,
        'required' => 0,
        'description' => $description,
        'default_value' => NULL,
        'field_name' => $name,
        'entity_type' => $entity_type,
        'bundle' => $bundle,
        'deleted' => '0',
        'widget' => array(
            'weight' => '-3',
            'type' => 'geofield_latlon',
            'module' => 'geofield',
            'active' => 1,
            'settings' => array(
                'html5_geolocation' => 0,
            ),
        ),
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'display' => array(
            'default' => array(
                'label' => $labeldisplay,
                'type' => 'geofield_wkt',
                'settings' => array(
                    'data' => 'full',
                ),
            ),
            'teaser' => array(
                'type' => 'hidden',
                'label' => $labeldisplay,
                'settings' => array(),
                'weight' => 0,
            ),
        ),        
    );
    return $instance;
}
 
//Link
function installHelper_getInstance_Link($t,$name,$label,$bundle,$entity_type,$description,$labeldisplay)
{
    $instance = array(
        'label' => $t($label),
        'required' => 0,
        'description' => $description,
        'default_value' => NULL,
        'field_name' => $name,
        'entity_type' => $entity_type,
        'bundle' => $bundle,
        'deleted' => '0',
        'widget' => array(
            'weight' => 0,
            'type' => 'link_field',
            'module' => 'link',
            'active' => 0,
            'settings' => array(),
        ),
        'settings' => array(
            'validate_url' => 1,
            'url' => 0,
            'title' => 'optional',
            'title_value' => '',
            'title_maxlength' => '128',
            'display' => array(
                'url_cutoff' => '80',
            ),
            'attributes' => array(
                'target' => 'default',
                'rel' => '',
                'class' => '',
                'configurable_title' => 0,
                'title' => '',
            ),
            'rel_remove' => 'default',
            'enable_tokens' => 1,
            'user_register_form' => FALSE,
        ),
        'display' => array(
            'default' => array(
                'label' => $labeldisplay,
                'type' => 'link_default',
                'settings' => array(),
                'module' => 'link',
                'weight' => 4,
            ),
            'teaser' => array(
                'type' => 'hidden',
                'label' => $labeldisplay,
                'settings' => array(),
                'weight' => 0,
            ),
        ),
    );
    return $instance;
};
 
//Reference
function installHelper_getInstance_Reference($t,$name,$label,$bundle,$entity_type,$description,$labeldisplay)
{
    $instance = array(
        'label' => $t($label),
        'required' => 0,
        'description' => $description,
        'default_value' => NULL,
        'field_name' => $name,
        'entity_type' => $entity_type,
        'bundle' => $bundle,
        'deleted' => '0',
        'widget' => array(
            'weight' => '17',
            'type' => 'node_reference_autocomplete',
            'module' => 'node_reference',
            'active' => 1,
            'settings' => array(
                'autocomplete_match' => 'contains',
                'size' => '60',
                'autocomplete_path' => 'node_reference/autocomplete',
            ),
        ),
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'display' => array(
            'default' => array(
                'label' => $labeldisplay,
                'type' => 'node_reference_default',
                'settings' => array(),
                'module' => 'node_reference',
                'weight' => 23,
            ),
            'teaser' => array(
                'type' => 'hidden',
                'label' => $labeldisplay,
                'settings' => array(),
                'weight' => 0,
            ),
        ),  
    );
    return $instance;
};
