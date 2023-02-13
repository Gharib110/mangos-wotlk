ALTER TABLE db_version CHANGE COLUMN required_14067_01_mangos_addon_stand_state required_14068_01_mangos_gameobject_data_split bit;

-- yes diff default from tbc and vanilla
ALTER TABLE `gameobject_addon` ADD COLUMN `animprogress` TINYINT(3) UNSIGNED NOT NULL DEFAULT '255' AFTER `guid`;
ALTER TABLE `gameobject_addon` ADD COLUMN `state` TINYINT(3) NOT NULL DEFAULT -1, AFTER `guid`;
UPDATE gameobject SET animprogress=100 WHERE animprogress=255;
INSERT INTO gameobject_addon(guid) SELECT guid FROM gameobject a LEFT JOIN gameobject_template b ON a.id=b.entry WHERE animprogress != 100 OR (a.state != 1 OR b.type IN(0,1,30) AND data0 = a.state);
UPDATE gameobject_addon a SET animprogress= (SELECT animprogress FROM gameobject b where a.guid=b.guid);
UPDATE gameobject_addon c SET state= (SELECT a.state FROM gameobject a JOIN gameobject_template b ON a.id=b.entry WHERE a.guid=c.guid AND (a.state != 1 OR b.type IN(0,1,30) AND data0 = a.state)) WHERE guid IN(SELECT a.guid FROM gameobject a JOIN gameobject_template b ON a.id=b.entry WHERE a.guid=c.guid AND (a.state != 1 OR b.type IN(0,1,30) AND data0 = a.state));
ALTER TABLE gameobject DROP COLUMN `animprogress`;
ALTER TABLE gameobject DROP COLUMN `state`;