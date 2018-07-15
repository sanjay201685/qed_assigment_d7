<table>
<?php 
foreach ($node as $key => $value) { ?>
  <tr>
    <td>
      <div>
        <?php if (in_array($node[$key]->nid, $vsl_result)) { ?>
          <a href="<?php print drupal_get_path_alias('node/' . $node[$key]->nid); ?>">
          <?php print $node[$key]->title; ?></a>
        <?php } else { ?>
          <?php print $node[$key]->title; ?>
        <?php } ?>
        <strong><span id="success_msg_<?php print $node[$key]->nid; ?>"></span></strong>
      </div>

      <div>
        <?php print $node[$key]->body_value; ?>
      </div>
      <div>
        <?php if (!in_array($node[$key]->nid, $vsl_result)) { ?>
          <input type="button" class="subs_but_<?php print $node[$key]->nid; ?>" value="Subscribe" id="subscribeVideo" 
          nid="<?php print $node[$key]->nid; ?>" />
          <a href="<?php print drupal_get_path_alias('node/' . $node[$key]->nid); ?>" class="read_more_<?php print $node[$key]->nid?>" style="display:none">Read More</a>
        <?php } else { ?>   
          <a href="videos/<?php print $node[$key]->nid; ?>" class="read_more">View Video list</a>
        <?php } ?> 
      </div>  
    </td>	
  </tr>
<?php } ?>

</table>